//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SCOperaRemoteWebLayerView;

@protocol SCOperaRemoteWebLayerViewDelegate <NSObject>
- (void)operaWebViewHeaderViewDidPressActionMenuButton;
- (void)remoteWebLayerView:(SCOperaRemoteWebLayerView *)arg1 didShareURL:(NSURL *)arg2;
- (void)remoteWebLayerViewDidPressExitButton:(SCOperaRemoteWebLayerView *)arg1;
@end
