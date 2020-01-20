//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SCQueuePerformer, UIImage, UIImageView;

@interface SCAsyncAssetImageView : UIView
{
    UIImageView *_imageView;
    SCQueuePerformer *_performer;
    NSString *_imageName;
}

@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)_handleLoadedImage:(id)arg1 imageName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadImageWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIImage *image;
@property(nonatomic) long long contentMode;
- (void)setImageName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
