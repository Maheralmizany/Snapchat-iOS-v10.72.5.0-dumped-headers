//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class SCFuture, SCLoadingIndicatorView, TTTAttributedLabel, UIImage, UIImageView, UILabel;

@interface SCPrivacyPolicyContentScrollView : UIScrollView
{
    UIImage *_image;
    UIImageView *_imageView;
    TTTAttributedLabel *_title;
    TTTAttributedLabel *_contentHeader;
    TTTAttributedLabel *_contentUpdate;
    UILabel *_contentFooter;
    SCFuture *_resourceImage;
    SCLoadingIndicatorView *_imageLoadingView;
}

- (void).cxx_destruct;
- (void)_updateImage:(id)arg1;
- (id)_contentBackgroundColorWhite;
- (void)_initContentWithLinkDelegate:(id)arg1;
- (id)initWithLinkDelegate:(id)arg1 resourceImage:(id)arg2;

@end
