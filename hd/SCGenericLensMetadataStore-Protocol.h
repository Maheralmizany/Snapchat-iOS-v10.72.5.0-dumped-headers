//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensMetadataStoreProtocol.h"

@class NSArray, SCLens, SCQueuePerformer;

@protocol SCGenericLensMetadataStore <SCLensMetadataStoreProtocol>
@property(retain, nonatomic) SCQueuePerformer *announcerPerformer;
- (void)addLens:(SCLens *)arg1 overrideIfFound:(_Bool)arg2 synchronously:(_Bool)arg3;
- (void)setLensFilter:(id <SCLensFilterProtocol>)arg1;
- (void)updateLensesToPrefetch:(NSArray *)arg1 synchronously:(_Bool)arg2;
- (void)updateLenses:(NSArray *)arg1 synchronously:(_Bool)arg2;
@end
