//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLSIUtilityLensStatePresenter;

@protocol SCLSIUtilityLensStatePresenterDelegate <NSObject>
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 requestedToPreviewResultsForContext:(struct NSString *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 requestedToShowResultsForContext:(struct NSString *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 stopScanningForContext:(struct NSString *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 startScanningForContext:(struct NSString *)arg2;
@end

