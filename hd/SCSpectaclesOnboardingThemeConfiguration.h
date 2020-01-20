//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface SCSpectaclesOnboardingThemeConfiguration : NSObject
{
    _Bool _isNewportTheme;
    UIColor *_controllerBackgroundColor;
    UIColor *_descriptionLabelsTextColor;
    UIFont *_primaryTextFont;
    UIFont *_secondaryTextFont;
    UIColor *_learnMoreButtonBorderColor;
    UIColor *_learnMoreButtonBackgroundColor;
    UIColor *_learnMoreButtonTitleColor;
    UIFont *_learnMoreButtonTitleFont;
    UIColor *_doneButtonBorderColor;
    UIColor *_doneButtonBackgroundColor;
    UIColor *_doneButtonTitleColor;
    UIFont *_doneButtonTitleFont;
}

+ (id)yellowOnboardingThemeConfig;
+ (id)newportMineralOnboardingThemeConfig;
+ (id)newportCarbonOnboardingThemeConfig;
@property(retain, nonatomic) UIFont *doneButtonTitleFont; // @synthesize doneButtonTitleFont=_doneButtonTitleFont;
@property(retain, nonatomic) UIColor *doneButtonTitleColor; // @synthesize doneButtonTitleColor=_doneButtonTitleColor;
@property(retain, nonatomic) UIColor *doneButtonBackgroundColor; // @synthesize doneButtonBackgroundColor=_doneButtonBackgroundColor;
@property(retain, nonatomic) UIColor *doneButtonBorderColor; // @synthesize doneButtonBorderColor=_doneButtonBorderColor;
@property(retain, nonatomic) UIFont *learnMoreButtonTitleFont; // @synthesize learnMoreButtonTitleFont=_learnMoreButtonTitleFont;
@property(retain, nonatomic) UIColor *learnMoreButtonTitleColor; // @synthesize learnMoreButtonTitleColor=_learnMoreButtonTitleColor;
@property(retain, nonatomic) UIColor *learnMoreButtonBackgroundColor; // @synthesize learnMoreButtonBackgroundColor=_learnMoreButtonBackgroundColor;
@property(retain, nonatomic) UIColor *learnMoreButtonBorderColor; // @synthesize learnMoreButtonBorderColor=_learnMoreButtonBorderColor;
@property(retain, nonatomic) UIFont *secondaryTextFont; // @synthesize secondaryTextFont=_secondaryTextFont;
@property(retain, nonatomic) UIFont *primaryTextFont; // @synthesize primaryTextFont=_primaryTextFont;
@property(retain, nonatomic) UIColor *descriptionLabelsTextColor; // @synthesize descriptionLabelsTextColor=_descriptionLabelsTextColor;
@property(retain, nonatomic) UIColor *controllerBackgroundColor; // @synthesize controllerBackgroundColor=_controllerBackgroundColor;
@property(nonatomic) _Bool isNewportTheme; // @synthesize isNewportTheme=_isNewportTheme;
- (void).cxx_destruct;

@end

