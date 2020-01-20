//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class NSArray, NSNumberFormatter, NSTimer, SCSpeed, UIImageView, UILabel, UIView;

@interface SCSpeedFilterView : SCOverlayFilterView
{
    UILabel *_warningSlugView;
    NSTimer *_warningSlugFadeoutTimer;
    _Bool _previouslyShowing;
    unsigned short _zeroCharacter;
    SCSpeed *_speed;
    unsigned long long _speedUnit;
    NSNumberFormatter *_numberFormatter;
    UILabel *_snapAndDriveWarning;
    UIView *_speedView;
    UIImageView *_decimal;
    UIImageView *_unit;
    NSArray *_digits;
}

@property(retain, nonatomic) NSArray *digits; // @synthesize digits=_digits;
@property(retain, nonatomic) UIImageView *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) UIImageView *decimal; // @synthesize decimal=_decimal;
@property(retain, nonatomic) UIView *speedView; // @synthesize speedView=_speedView;
@property(retain, nonatomic) UILabel *snapAndDriveWarning; // @synthesize snapAndDriveWarning=_snapAndDriveWarning;
@property(nonatomic) unsigned short zeroCharacter; // @synthesize zeroCharacter=_zeroCharacter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) unsigned long long speedUnit; // @synthesize speedUnit=_speedUnit;
@property(retain, nonatomic) SCSpeed *speed; // @synthesize speed=_speed;
@property(nonatomic) _Bool previouslyShowing; // @synthesize previouslyShowing=_previouslyShowing;
- (void).cxx_destruct;
- (void)_fadeoutWarningSlug:(id)arg1;
- (id)imageForNumber:(unsigned long long)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (void)fadeOutSnapAndDriveWarning;
- (void)setDisplayed:(_Bool)arg1;
- (id)displayName;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (void)setSpeedToDisplay;
- (void)resetDigitImageViews;
- (void)updateConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;

@end

