//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCMapCompassButton, UIView, UIView<SCMapLocalityLabel>, UIView<SCMapTimeAndWeatherView>;

@protocol SCMapChrome <NSObject>
@property(nonatomic) double footerViewsOpacity;
@property(nonatomic) double additionalFooterPadding;
@property(nonatomic) double footerGradientOpacity;
@property(retain, nonatomic) id <SCMapChromeButtonControlling> statusButtonController;
@property(retain, nonatomic) id <SCMapChromeButtonControlling> exploreButtonController;
@property(readonly, nonatomic) UIView *headerView;
@property(nonatomic) __weak id <SCMapChromeDelegate> delegate;
@property(copy, nonatomic) NSArray *extraHeaderItems;
@property(retain, nonatomic) UIView *cameraButton;
@property(retain, nonatomic) UIView *replaceCompassButtonWithView;
@property(readonly, nonatomic) SCMapCompassButton *compassButton;
@property(copy, nonatomic) NSString *exploreHeaderTitle;
@property(readonly, nonatomic) UIView<SCMapLocalityLabel> *localityLabel;
@property(readonly, nonatomic) UIView<SCMapTimeAndWeatherView> *timeAndWeatherView;
@property(nonatomic) _Bool backButtonHidden;
- (void)hideFooterButtons;
- (void)hideExploreHeader;
- (void)showExploreHeaderWithCloseBlock:(void (^)(void))arg1;
- (void)restoreAfterScreenshotRendered;
- (NSArray *)overlayViewsForShareController;
- (void)addTooltipAndConstraints:(UIView *)arg1 textWidth:(double)arg2;
- (double)bottomInset;
- (double)bottomBarHeight;
- (double)topBarHeight;
- (UIView *)locationSettingsButton;
- (void)setHeaderButtonsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolbarVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHeaderGradientVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHeaderContentVisible:(_Bool)arg1 animated:(_Bool)arg2;
@end

