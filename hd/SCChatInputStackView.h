//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStackView.h"

#import "SCTraceEnabled.h"

@class NSArray, NSString;

@interface SCChatInputStackView : UIStackView <SCTraceEnabled>
{
}

- (void)_popOutItem:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_popOutItem:(id)arg1;
- (void)_popInItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_fadeOutItem:(id)arg1;
- (void)_fadeInItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)inputItemAtIndex:(unsigned long long)arg1;
- (void)insertInputItem:(id)arg1 atIndex:(unsigned long long)arg2 animationStyle:(unsigned long long)arg3;
- (void)addInputItem:(id)arg1 animationStyle:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *inputItems;
- (struct CGSize)intrinsicContentSize;
- (void)_setupPositionsForInputItems:(id)arg1;
- (void)_setupDefaultLayoutValues;
- (id)initWithInputItems:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

