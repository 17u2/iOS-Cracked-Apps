//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDeleteDataSource.h"

@class NSObject<TTDataSourceDelegate><TTSectionDataSourceDelegate><TTBaseCellAction>;

@interface TTSectionDataSource : TTDeleteDataSource
{
}

- (void)removeDataInSection:(long long)arg1 beginRow:(long long)arg2 endRow:(long long)arg3;
- (void)removeDataAtIndexPath:(id)arg1;
- (void)updateDataInSection:(long long)arg1 withArray:(id)arg2;
- (void)insertMoreDataInSection:(long long)arg1 withArray:(id)arg2;
- (id)addItems:(id)arg1 atIndex:(long long)arg2 section:(long long)arg3;
- (void)removePageDataAtIndexPath:(id)arg1;
- (void)updateMorePageDataArray:(id)arg1 atIndex:(long long)arg2;
- (void)updateMorePageDataArray:(id)arg1;
- (void)updateDataAtIndexPaths:(id)arg1 withDataArray:(id)arg2;
- (void)updateFirstPageDataArray:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionViewEntity:(id)arg1 section:(long long)arg2;
- (id)cellEntity:(id)arg1 indexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)cellEntityWithIndexPath:(id)arg1;
- (id)sectionCellEntityWithSection:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak NSObject<TTDataSourceDelegate><TTSectionDataSourceDelegate><TTBaseCellAction> *delegate; // @dynamic delegate;

@end
