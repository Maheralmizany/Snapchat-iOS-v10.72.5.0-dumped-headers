//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseChatCellViewModelProps.h"

@class NSString;

@interface SCPendingStateCellViewModelProps : SCBaseChatCellViewModelProps
{
    NSString *_recipient;
    long long _pendingSnapNum;
    long long _pendingChatNum;
}

@property(nonatomic) long long pendingChatNum; // @synthesize pendingChatNum=_pendingChatNum;
@property(nonatomic) long long pendingSnapNum; // @synthesize pendingSnapNum=_pendingSnapNum;
@property(copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;

@end

