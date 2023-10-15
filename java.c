@Controller
@RequestMapping("/playlist")
public class PlaylistController {
    private List<Song> playlist = new ArrayList<>();

    @GetMapping
    public String showPlaylist(Model model) {
        model.addAttribute("playlist", playlist);
        return "playlist";
    }

    @PostMapping("/addSong")
    public String addSong(@ModelAttribute Song song) {
        playlist.add(song);
        return "redirect:/playlist";
    }
}
