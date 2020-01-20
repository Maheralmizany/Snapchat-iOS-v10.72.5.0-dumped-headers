//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSURL, UIColor, UIImage, UIImageView, UIVisualEffect, UIVisualEffectView;

@interface SCOnDemandGeofilterBlurredBackgroundView : UIView
{
    UIImageView *_backgroundImageView;
    UIVisualEffectView *_visualEffectView;
    UIView *_overlayView;
    UIImage *_backgroundImage;
    NSURL *_imageURL;
    UIVisualEffect *_visualEffect;
    UIColor *_overlayColor;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

@property(nonatomic) __weak id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(retain, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andGeofilterSession:(id)arg2;

@end

