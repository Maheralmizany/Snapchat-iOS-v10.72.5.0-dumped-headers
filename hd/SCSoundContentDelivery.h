//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCSoundContentDelivery : NSObject
{
    SCLazy *_contentDelivery;
}

- (void).cxx_destruct;
- (void)_saveDataForSound:(unsigned long long)arg1 toFile:(id)arg2;
- (void)_dataForSound:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prefetchNotificationSounds;
- (void)createPlayerForSound:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContentDelivery:(id)arg1;

@end
