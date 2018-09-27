const uclass = require('uclass')().bind(this,global)
class MySMA extends StaticMeshActor {
  ctor() {
    this.StaticMeshComponent.SetStaticMesh(StaticMesh.Load('/Engine/BasicShapes/Cube.Cube'))
  }
}      
let MySMA_C = uclass(MySMA) 
new MySMA_C(GWorld,{Z:200})