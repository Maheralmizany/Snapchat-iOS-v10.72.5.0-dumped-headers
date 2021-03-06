//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerURLConfigListener.h"

@class NSString;

@interface SCStickerURL : NSObject <SCStickerURLConfigListener>
{
    id <SCStickerURLConfig> _config;
    CDUnknownBlockType _updateBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) id <SCStickerURLConfig> config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)stickerURLConfigDidChange:(id)arg1;
- (void)_updateFromConfig;
- (void)stickersStorageBucketStickersSubfolder:(CDUnknownBlockType)arg1;
- (void)stickersStorageBucketBase:(CDUnknownBlockType)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

