//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCCustomStoryCreationInfo;

@interface SCCustomStoryCreationMetadata : NSObject <NSCopying>
{
    _Bool _autoSaveEnabled;
    NSString *_displayName;
    SCCustomStoryCreationInfo *_creationInfo;
}

@property(readonly, copy, nonatomic) SCCustomStoryCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(readonly, nonatomic) _Bool autoSaveEnabled; // @synthesize autoSaveEnabled=_autoSaveEnabled;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayName:(id)arg1 autoSaveEnabled:(_Bool)arg2 creationInfo:(id)arg3;

@end

