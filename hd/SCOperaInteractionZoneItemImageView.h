//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCOperaInteractionZoneItemImageViewModel, UIImageView;

@interface SCOperaInteractionZoneItemImageView : UIView
{
    UIImageView *_imageView;
    SCOperaInteractionZoneItemImageViewModel *_viewModel;
    id <SCOperaImageProvider> _imageProvider;
}

@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) SCOperaInteractionZoneItemImageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
