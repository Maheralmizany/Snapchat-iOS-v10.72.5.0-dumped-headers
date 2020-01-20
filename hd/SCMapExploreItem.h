//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCMapAnnouncement, SCMapStatusGroup;

@interface SCMapExploreItem : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCMapStatusGroup *_statusGroup_statusGroup;
    SCMapAnnouncement *_announcement_announcement;
}

+ (id)statusGroupWithStatusGroup:(id)arg1;
+ (id)requiresUpdate;
+ (id)announcementWithAnnouncement:(id)arg1;
- (void).cxx_destruct;
- (void)matchStatusGroup:(CDUnknownBlockType)arg1 announcement:(CDUnknownBlockType)arg2 requiresUpdate:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
