using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public interface IUpdater { 
        public void Update();
    }

    //when a node data is an IUpdater, it will be added to the updater list and will be updated every frame
   
    


}