//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UIImage, UIImageView, UIView, UIViewController;

@protocol SCFeatureLensInPreview
- (void)updateLensButtonInToolbarIfNeeded;
- (void)startFaceDetection;
- (void)dismissLensInViewController;
- (void)presentLensInViewControllerFromViewController:(UIViewController *)arg1 parentView:(UIView *)arg2 sourceView:(UIView *)arg3 bottomView:(UIView *)arg4 delegate:(id <SCLensPreviewViewControllerDelegate>)arg5 sessionId:(NSString *)arg6;
- (UIImageView *)lensPlaceholderViewWithImage:(UIImage *)arg1;
- (void)removeLensPlaceholderView:(UIImageView *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)removeLensPlaceholderView;
@end
