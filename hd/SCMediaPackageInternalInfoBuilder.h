//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCMediaPackageInternalInfoBuilder : NSObject
{
    NSString *_mediaPackageId;
    NSDate *_obsoleteTime;
    _Bool _isLocked;
}

+ (id)mediaPackageInternalInfoFromExistingMediaPackageInternalInfo:(id)arg1;
+ (id)mediaPackageInternalInfo;
- (void).cxx_destruct;
- (id)withIsLocked:(_Bool)arg1;
- (id)withObsoleteTime:(id)arg1;
- (id)withMediaPackageId:(id)arg1;
- (id)build;

@end

