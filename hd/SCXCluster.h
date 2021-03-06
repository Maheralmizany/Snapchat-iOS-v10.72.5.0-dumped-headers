//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCXClusterable.h"

@class NSSet, NSString;

@interface SCXCluster : NSObject <SCXClusterable>
{
    NSSet *_clusterables;
    struct CGPoint _slippyPoint;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) struct CGPoint slippyPoint; // @synthesize slippyPoint=_slippyPoint;
@property(readonly, nonatomic) NSSet *clusterables; // @synthesize clusterables=_clusterables;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithClusterables:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

