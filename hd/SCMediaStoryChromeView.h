//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCStoryChromeViewModel, UILabel;

@interface SCMediaStoryChromeView : UIView
{
    UILabel *_chromeTitleLabel;
    UILabel *_chromeSubtitleLabel;
    _Bool _hidePosterName;
    SCStoryChromeViewModel *_storyChromeViewModel;
}

@property(retain, nonatomic) SCStoryChromeViewModel *storyChromeViewModel; // @synthesize storyChromeViewModel=_storyChromeViewModel;
@property(nonatomic) _Bool hidePosterName; // @synthesize hidePosterName=_hidePosterName;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)_initChromeLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end

