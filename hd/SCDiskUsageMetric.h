//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SCDiskUsageMetric : NSObject
{
    NSString *_path;
    unsigned long long _localSize;
    unsigned long long _totalSize;
    unsigned long long _fileCount;
    NSArray *_subdirectories;
    unsigned long long _reportLimit;
}

@property(readonly, copy, nonatomic) NSArray *subdirectories; // @synthesize subdirectories=_subdirectories;
@property(readonly, nonatomic) unsigned long long reportLimit; // @synthesize reportLimit=_reportLimit;
@property(readonly, nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(readonly, nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(readonly, nonatomic) unsigned long long localSize; // @synthesize localSize=_localSize;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)init:(id)arg1 localSize:(unsigned long long)arg2 fileCount:(unsigned long long)arg3 reportLimit:(unsigned long long)arg4 subdirectories:(id)arg5;
- (id)init:(id)arg1 localSize:(unsigned long long)arg2 totalSize:(unsigned long long)arg3 fileCount:(unsigned long long)arg4;

@end

