//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, SCMergedGalleryDataSource;

@interface SCGalleryStoryViewModel : NSObject
{
    SCMergedGalleryDataSource *_dataSource;
    long long _snapsCount;
    NSSet *_highlightedSnapIds;
    NSArray *_snaps;
    id <SCGalleryEntry> _entry;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property(readonly, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (_Bool)isCompatible;
- (_Bool)hasMore:(long long)arg1;
- (_Bool)isExpanded;
@property(readonly, nonatomic) NSSet *highlightedSnapIds; // @synthesize highlightedSnapIds=_highlightedSnapIds;
@property(readonly, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, nonatomic) long long snapsCount; // @synthesize snapsCount=_snapsCount;
- (void)toggleExpand;
- (id)initWithEntry:(id)arg1 dataSource:(id)arg2 page:(long long)arg3;

@end

