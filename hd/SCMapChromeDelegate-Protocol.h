//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSearchView;

@protocol SCMapChromeDelegate <NSObject>
- (void)mapChrome:(id <SCMapChrome>)arg1 wantsToBeginSearchWithSourceView:(SCSearchView *)arg2;
- (void)mapChromeDidTapStatusButton:(id <SCMapChrome>)arg1;
- (void)mapChromeDidTapLocationSettingsButton:(id <SCMapChrome>)arg1;
- (void)mapChromeDidTapExploreButton:(id <SCMapChrome>)arg1;
- (void)mapChromeDidTapBackButton:(id <SCMapChrome>)arg1;
@end
