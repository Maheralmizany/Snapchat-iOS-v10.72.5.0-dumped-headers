//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCNNetworkTypesBandwidthChangeListener;

@protocol SCNNetworkTypesBandwidthChangeNotifier
- (long long)registerUploadListener:(SCNNetworkTypesBandwidthChangeListener *)arg1;
- (long long)registerDownloadListener:(SCNNetworkTypesBandwidthChangeListener *)arg1;
- (void)notifyUploadListeners:(long long)arg1;
- (void)notifyDownloadListeners:(long long)arg1;
@end
