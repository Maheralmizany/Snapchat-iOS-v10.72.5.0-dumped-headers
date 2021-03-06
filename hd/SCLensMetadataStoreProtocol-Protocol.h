//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensMetadataProviderSettingsAppliable.h"

@class NSArray;

@protocol SCLensMetadataStoreProtocol <SCLensMetadataProviderSettingsAppliable>
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)synchronize;
- (void)stopUpdating;
- (void)startUpdating;
- (void)warmUp;
- (void)removeListener:(id <SCLensMetadataStoreListener>)arg1;
- (void)addListener:(id <SCLensMetadataStoreListener>)arg1;
@end

