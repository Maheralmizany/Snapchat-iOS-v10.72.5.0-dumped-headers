//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGroupsDataRequestListener.h"

@interface SCComposerPeopleGroupsDataRequestCallbackListener : NSObject <SCGroupsDataRequestListener>
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (id)initWithUpdateCallback:(CDUnknownBlockType)arg1;

@end

