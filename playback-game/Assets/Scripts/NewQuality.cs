using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class NewQuality : MonoBehaviour {

	public UnityEngine.UI.Slider Slidah;
	public UnityEngine.UI.Text QualityText;
	// Use this for initialization
	void Start() {
		Slidah.onValueChanged.AddListener (delegate {
			SetQuality ();
		});
		Slidah.onValueChanged.AddListener (delegate {
			SetQualityText ();
		});
	}


	public void SetQuality() {
		if (Slidah.value == 0 ) {
			Debug.Log ("Quality Manager: Low quality has been set");
			QualitySettings.SetQualityLevel(0);
		} else if (Slidah.value == 1 ) {
			Debug.Log ("Quality Manager: Medium quality has been set");
			QualitySettings.SetQualityLevel(2);
		} else if (Slidah.value == 2 ) {
			Debug.Log("Quality Manager: Medium-High quality has been set");
			QualitySettings.SetQualityLevel(4);
		} else if (Slidah.value == 3 ) {
			Debug.Log("Quality Manager: High quality has been set");
			QualitySettings.SetQualityLevel(6);
		}
}
	public void SetQualityText() {
			if (QualitySettings.GetQualityLevel() == 0 ) {
			QualityText.text = "Low";
			Slidah.value = 0;

			} else if (QualitySettings.GetQualityLevel() == 2 ) {
			QualityText.text = "Medium";
			Slidah.value = 1;

			} else if (QualitySettings.GetQualityLevel() == 4 ) {
			QualityText.text = "Med-High";
			Slidah.value = 2;

			} else if (QualitySettings.GetQualityLevel() == 6 ) {
			QualityText.text = "High";
			Slidah.value = 3;
		}

	}


}
