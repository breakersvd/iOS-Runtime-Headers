/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage, NSString, NSDictionary;

@interface CKVideoMediaObject : CKAVMediaObject <CKPreviewableAttachment> {
    NSDictionary *_transcodeOptions;
    UIImage *_videoPreviewImage;
    UIImage *_videoImage;
    NSString *_transcodePath;
}

+ (id)mimeTypesToFileExtensions;

- (void)dealloc;
- (int)mediaType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)videoImage;
- (void)_generatePreviewOnMainThreadForVideoFile:(id)arg1;
- (id)_newVideoPreviewImageForImage:(id)arg1 withTailStyle:(int)arg2;
- (id)_newPreviewImageForIncomingVideoWithTailStyle:(int)arg1;
- (id)_newPreviewImageWithTailStyle:(int)arg1;
- (void)_generateImageOnMainThreadForVideoFile:(id)arg1;
- (id)effectiveExportedFilename;
- (id)transcodedFilename;
- (void)prepareForTranscode;
- (id)transcodeMimeType;
- (id)_transcodeOptions;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (double)transcodeStartTime;
- (void)copyToPasteboard:(id)arg1;
- (BOOL)savePreview:(id)arg1 toPath:(id)arg2 forOrientation:(int)arg3;
- (id)savedPreviewFromPath:(id)arg1 forOrientation:(int)arg2;
- (id)previewForOrientation:(int)arg1 highlight:(BOOL)arg2;

@end