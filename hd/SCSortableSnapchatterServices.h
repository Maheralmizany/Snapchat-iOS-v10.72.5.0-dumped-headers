//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCSortableSnapchatterServices : NSObject
{
    SCLazy *_sortableSnapchatterObservableRepository;
    SCLazy *_snapchattersDisplayMetadataFetcher;
}

@property(readonly, nonatomic) SCLazy *snapchattersDisplayMetadataFetcher; // @synthesize snapchattersDisplayMetadataFetcher=_snapchattersDisplayMetadataFetcher;
@property(readonly, nonatomic) SCLazy *sortableSnapchatterObservableRepository; // @synthesize sortableSnapchatterObservableRepository=_sortableSnapchatterObservableRepository;
- (void).cxx_destruct;
- (id)initWithSortableSnapchatterObservableRepository:(id)arg1 snapchattersDisplayMetadataFetcher:(id)arg2;

@end

