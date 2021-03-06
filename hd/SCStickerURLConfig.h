//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCServerConfigListener.h"
#import "SCStickerURLConfig.h"

@class NSString;

@interface SCStickerURLConfig : NSObject <SCServerConfigListener, SCStickerURLConfig>
{
    id <SCStickerURLConfigListener> _listener;
    NSString *_cdnURLString;
}

@property(readonly, copy, nonatomic) NSString *cdnURLString; // @synthesize cdnURLString=_cdnURLString;
@property(nonatomic) __weak id <SCStickerURLConfigListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)serverConfigDidChange:(id)arg1;
- (void)_updateFromServerConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

