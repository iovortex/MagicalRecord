//
//  Import SingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKeyTests.m
//  Magical Record
//
//  Created by Saul Mora on 8/16/11.
//  Copyright 2011 Magical Panda Software LLC. All rights reserved.
//

#import "SingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKey.h"
#import "MagicalDataImportTestCase.h"

@interface ImportSingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKeyTests : MagicalDataImportTestCase

@end

@implementation ImportSingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKeyTests

- (Class) testEntityClass
{
    return [SingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKey class];
}

- (void) testImportData
{
    SingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKey *entity = (SingleEntityRelatedToManyMappedEntitiesUsingMappedPrimaryKey *)self.testEntity;
    
    assertThat(entity, is(notNilValue()));
    assertThat(entity.mappedEntities, hasCountOf(4));
}

@end
