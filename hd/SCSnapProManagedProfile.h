//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapProProfile;

@interface SCSnapProManagedProfile : NSObject <NSCopying>
{
    _Bool _canPostToStory;
    SCSnapProProfile *_profile;
}

@property(readonly, nonatomic) _Bool canPostToStory; // @synthesize canPostToStory=_canPostToStory;
@property(readonly, copy, nonatomic) SCSnapProProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfile:(id)arg1 canPostToStory:(_Bool)arg2;

@end

