//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerFoundationApplicationProtocol.h"

@class NSString;

@interface SCComposerFoundationApplication : NSObject <SCComposerFoundationApplicationProtocol>
{
}

- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)observeKeyboardHeightWithCallback:(CDUnknownBlockType)arg1;
- (id)observeEnteredForegroundWithCallback:(CDUnknownBlockType)arg1;
- (id)observeEnteredBackgroundWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

