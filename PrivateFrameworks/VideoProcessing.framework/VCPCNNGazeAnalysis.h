/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNGazeAnalysis : NSObject {
    VCPCNNData * _eyeInput;
    VCPCNNData * _faceInput;
    VCPCNNModel * _modelEyeOpenness;
    VCPCNNModel * _modelLandmarks;
}

- (void).cxx_destruct;
- (long)cropAndRotateEyeImage:(struct __CVBuffer { }*)arg1 leftCornerX:(int)arg2 leftCornerY:(int)arg3 rightCornerX:(int)arg4 rightCornerY:(int)arg5;
- (long)detectEyeOpennessForFace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2 eyeOpenness:(BOOL*)arg3;
- (id)init;
- (long)initEyeOpennessModel;
- (long)initLandmarkModel;

@end