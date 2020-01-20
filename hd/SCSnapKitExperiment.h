//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCSnapKitExperiment : SCDocObject <NSCopying>
{
    NSString *_studyId;
    NSArray *_experimentSettings;
    long long _experimentId;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) long long experimentId; // @synthesize experimentId=_experimentId;
@property(readonly, copy, nonatomic) NSArray *experimentSettings; // @synthesize experimentSettings=_experimentSettings;
@property(readonly, copy, nonatomic) NSString *studyId; // @synthesize studyId=_studyId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStudyId:(id)arg1 experimentSettings:(id)arg2 experimentId:(long long)arg3;

@end

