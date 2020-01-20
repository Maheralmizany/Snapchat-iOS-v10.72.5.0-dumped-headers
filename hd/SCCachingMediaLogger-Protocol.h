//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCCachingMediaLogger <NSObject>
- (void)galleryCacheDiskUsage:(long long)arg1 currentDiskUsage:(long long)arg2 level0FileSzie:(long long)arg3 highLevelFileSize:(long long)arg4 nonEmptyEntityCount:(unsigned long long)arg5;
- (void)didSaveImagesToDisk:(long long)arg1 imageCount:(unsigned long long)arg2 sourceLevel:(long long)arg3;
- (void)retrieveImageWithStep:(unsigned long long)arg1 generationId:(NSString *)arg2 latency:(double)arg3;
- (void)cacheMissDidHappen;
- (void)didReceiveRequest;
@end

