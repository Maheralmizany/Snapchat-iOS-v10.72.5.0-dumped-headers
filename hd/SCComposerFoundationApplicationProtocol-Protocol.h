//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@protocol SCComposerFoundationApplicationProtocol <NSObject, SCComposerMarshallable>
- (id <SCComposerFoundationCancelable>)observeKeyboardHeightWithCallback:(void (^)(double))arg1;
- (id <SCComposerFoundationCancelable>)observeEnteredForegroundWithCallback:(void (^)(void))arg1;
- (id <SCComposerFoundationCancelable>)observeEnteredBackgroundWithCallback:(void (^)(void))arg1;
@end

