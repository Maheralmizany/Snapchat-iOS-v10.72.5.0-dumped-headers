//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, SCQueuePerformer;

@interface SCNetworkConnectionClassStore : NSObject <NSCoding>
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_wifiConnectionClassCache;
    NSMutableDictionary *_wwanConnectionClassCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *wwanConnectionClassCache; // @synthesize wwanConnectionClassCache=_wwanConnectionClassCache;
@property(retain, nonatomic) NSMutableDictionary *wifiConnectionClassCache; // @synthesize wifiConnectionClassCache=_wifiConnectionClassCache;
- (void).cxx_destruct;
- (long long)savedUploadBandwidthForNetworkConnectionId:(id)arg1 isWifiConnection:(_Bool)arg2;
- (long long)savedDownloadBandwidthForNetworkConnectionId:(id)arg1 isWifiConnection:(_Bool)arg2;
- (long long)savedUploadConnectionClassForNetworkConnectionId:(id)arg1 isWifiConnection:(_Bool)arg2;
- (long long)savedDownloadConnectionClassForNetworkConnectionId:(id)arg1 isWifiConnection:(_Bool)arg2;
- (void)didUploadConnectionClassChangedForNetworkConnectionId:(id)arg1 uploadBandwidth:(long long)arg2 newConnectionClass:(long long)arg3 isWifiConnection:(_Bool)arg4;
- (void)didDownloadConnectionClassChangedForNetworkConnectionId:(id)arg1 downloadBandwidth:(long long)arg2 newConnectionClass:(long long)arg3 isWifiConnection:(_Bool)arg4;
- (void)_didEnterBackground;
- (void)clear;
- (void)_pruneExpiredWWANRecords;
- (void)_pruneExpiredWifiRecords;
- (void)_saveState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

