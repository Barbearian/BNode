namespace Bear
{
    public interface ILinkSignal : IBNodeSignal
    {
        public IBNode LinkTarget { get; set; }
    }
}