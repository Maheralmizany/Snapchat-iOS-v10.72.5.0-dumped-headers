//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCUnifiedProfileBitmojiSectionLoadingStateProvider : NSObject
{
    NSMutableDictionary *_actionIdentifierToLoadingStateDictionary;
    id <SCUnifiedProfileBitmojiSectionLoadingStateProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedProfileBitmojiSectionLoadingStateProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setActionIdentifier:(id)arg1 isInLoadingState:(_Bool)arg2;
- (_Bool)isActionIdentifierInLoadingState:(id)arg1;
- (id)init;

@end
