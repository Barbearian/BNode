
using UnityEngine;

namespace Bear
{
    public struct AnimatorLinkSignal : ILinkSignal
    {
        public IBNode LinkTarget { get; set; }
    }
}