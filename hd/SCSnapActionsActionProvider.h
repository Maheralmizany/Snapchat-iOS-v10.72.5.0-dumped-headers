//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSnapActionsActionProvider : NSObject
{
    CDUnknownBlockType _actionProvider;
    int _actionType;
}

- (void).cxx_destruct;
- (id)createActionPerformer;
- (_Bool)matchesActionType:(int)arg1;
- (id)initWithProvider:(CDUnknownBlockType)arg1 actionType:(int)arg2;

@end
