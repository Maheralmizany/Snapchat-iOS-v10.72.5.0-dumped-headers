//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStickerPackMetadataLoaderSubscription.h"

@interface SCStickerPackMetadataLoaderStrongSubscription : SCStickerPackMetadataLoaderSubscription
{
    id <SCStickerPackMetadataLoaderSubscriber> _strongSubscriber;
}

@property(readonly, nonatomic) id <SCStickerPackMetadataLoaderSubscriber> strongSubscriber; // @synthesize strongSubscriber=_strongSubscriber;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)subscriber;
- (id)initWithSubscriber:(id)arg1 queue:(id)arg2 key:(id)arg3;

@end
