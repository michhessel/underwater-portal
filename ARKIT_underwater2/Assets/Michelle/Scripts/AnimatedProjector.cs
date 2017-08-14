using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatedProjector : MonoBehaviour {

	public float fps = 30.0f;
	public Texture2D[] frames;
	private int frameIndex;
	private Projector projector;

	// Use this for initialization
	void Start () {
		projector = GetComponent<Projector> ();
		InvokeRepeating ("NextFrame", 0, 1 / fps);
	}
	
	void NextFrame () {
		projector.material.SetTexture("_ShadowTex", frames[frameIndex]);
				frameIndex = (frameIndex + 1)% frames.Length; 
	}
}
