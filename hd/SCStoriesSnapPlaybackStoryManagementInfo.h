//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCStoriesSnapPlaybackStoryManagementInfo : NSObject <NSCopying>
{
    _Bool _shouldShowViewersList;
    _Bool _isSaveable;
    _Bool _isDeletable;
}

@property(readonly, nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
@property(readonly, nonatomic) _Bool isSaveable; // @synthesize isSaveable=_isSaveable;
@property(readonly, nonatomic) _Bool shouldShowViewersList; // @synthesize shouldShowViewersList=_shouldShowViewersList;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShouldShowViewersList:(_Bool)arg1 isSaveable:(_Bool)arg2 isDeletable:(_Bool)arg3;

@end
