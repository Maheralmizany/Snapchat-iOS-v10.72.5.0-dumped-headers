//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SCNContentManagerCancelableId, SCNContentManagerContentKey, SCNContentManagerContentRetrievalMetrics;

@protocol SCNContentManagerContentResult
- (NSString *)getZipEntryFilePath:(NSString *)arg1;
- (NSString *)getFilePath;
- (id <SCNContentManagerReadStream>)getZipArchiveForLocalContent;
- (id <SCNContentManagerReadStream>)getZipEntryData:(NSString *)arg1;
- (_Bool)getIsZipArchive;
- (void)free;
- (_Bool)getIsStreaming;
- (id <SCNNetworkManagerNetworkStats>)getNetworkStats;
- (long long)getErrorReason;
- (SCNContentManagerContentRetrievalMetrics *)getMetrics;
- (void)cancelWriteStreamRequest:(SCNContentManagerCancelableId *)arg1;
- (SCNContentManagerCancelableId *)pushBytesToWriteStream:(id <SCNContentManagerWriteStream>)arg1 start:(long long)arg2 count:(long long)arg3;
- (id <SCNContentManagerReadStream>)createReadStream;
- (NSString *)getStatusMessage;
- (long long)getStatus;
- (SCNContentManagerContentKey *)getContentKey;
- (long long)getTotalSize;
@end

