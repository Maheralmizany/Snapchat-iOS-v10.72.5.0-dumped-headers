//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SCOperaRemoteWebV3LayerView, SCOperaWebViewWrapper;

@protocol SCOperaRemoteWebV3LayerViewDelegate <NSObject>
- (void)didFinalizePerformanceMetricsForWebViewWrapper:(SCOperaWebViewWrapper *)arg1;
- (void)didFinishLoading:(SCOperaRemoteWebV3LayerView *)arg1 webViewWrapper:(SCOperaWebViewWrapper *)arg2;
- (void)didOpenActionMenuLayerView:(SCOperaRemoteWebV3LayerView *)arg1;
- (void)didShareURL:(NSURL *)arg1 layerView:(SCOperaRemoteWebV3LayerView *)arg2;
- (void)didCloseLayerView:(SCOperaRemoteWebV3LayerView *)arg1;
@end

