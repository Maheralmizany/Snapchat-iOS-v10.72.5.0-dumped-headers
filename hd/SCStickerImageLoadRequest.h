//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCanceling.h"

@class NSString;

@interface SCStickerImageLoadRequest : NSObject <SCCanceling>
{
    _Bool _isCancelled;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

