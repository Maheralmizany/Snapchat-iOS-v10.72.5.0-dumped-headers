//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView<SCSendPreviewMediaView>;

@protocol SCSendPreviewViewModel <NSObject>
- (long long)shareType;
- (UIView<SCSendPreviewMediaView> *)mediaView;
- (long long)viewStyle;

@optional
- (NSString *)chatMessage;
- (void)setPreviewBlobImage:(UIImage *)arg1;
- (struct UIEdgeInsets)mediaViewInsets;
- (NSString *)subtitle;
- (NSString *)title;
- (double)mediaViewAspectRatio;
@end
